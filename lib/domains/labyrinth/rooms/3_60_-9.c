inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 3, 60, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/2_60_-9.c",
  "east" : DIR+"/rooms/4_60_-9.c"
  ]) );

}

