inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 5 }));
  set_short( "Hallway - x53y48z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y49z5.c",
  "south" : DIR+"/rooms/x53y47z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
