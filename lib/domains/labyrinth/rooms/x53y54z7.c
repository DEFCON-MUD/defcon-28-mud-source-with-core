inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 7 }));
  set_short( "Hallway - x53y54z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y55z7.c",
  "south" : DIR+"/rooms/x53y53z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
