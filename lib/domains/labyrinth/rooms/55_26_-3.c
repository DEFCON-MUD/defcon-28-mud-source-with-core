inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 55, 26, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/56_26_-3.c",
  "north" : DIR+"/rooms/55_25_-3.c"
  ]) );

}

