inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 2, 46, -0 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/dba.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/1_46_-0.c",
  "east" : DIR+"/rooms/3_46_-0.c"
  ]) );

}

