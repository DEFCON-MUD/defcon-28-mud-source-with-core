inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 30, 38, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/auditor.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/29_38_-3.c",
  "east" : DIR+"/rooms/31_38_-3.c"
  ]) );

}

