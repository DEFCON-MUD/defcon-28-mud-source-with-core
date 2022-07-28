inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 2 }));
  set_short( "Hallway - x35y53z2" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z2.c",
  "south" : DIR+"/rooms/x35y52z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
