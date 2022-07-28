inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 47, 7 }));
  set_short( "Corridor - x13y47z7" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y48z7.c",
  "south" : DIR+"/rooms/x13y46z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
