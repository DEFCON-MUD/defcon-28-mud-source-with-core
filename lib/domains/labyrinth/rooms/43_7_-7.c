inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 43, 7, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/Gl0Rz0.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/43_8_-7.c",
  "north" : DIR+"/rooms/43_6_-7.c"
  ]) );

}

