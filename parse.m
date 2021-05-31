fns = dir('D:\repositories\IRemote\');
fns = {fns.name};
tfid = fopen('D:\repositories\IRemote\codes.txt', 'w');
for pp = fns
  pp = pp{1}
  if isempty(strfind(pp, '.txt')) || ~isempty(strfind(pp, 'codes')) 
    continue
  endif
  tpp = ['D:\repositories\IRemote\', pp];
  fid = fopen(tpp, 'r');
  ss = fscanf(fid, '%c');
  fclose(fid);

  val = str2num(regexprep(ss,'#.+?\n' ,''));
  val = round(val/max(val));
  I = find(abs(diff(val)));
  I = diff(I);
  I = I(I < 2000);
  I = I > 1000;
  I = I(2:2:64);
  fprintf(tfid, [pp, ' = {', regexprep(num2str(I'), '\s+', ', ') '}\n']);

end

fclose(tfid);

#I = I(2:end-1);
#figure;
#plot(I, '.');