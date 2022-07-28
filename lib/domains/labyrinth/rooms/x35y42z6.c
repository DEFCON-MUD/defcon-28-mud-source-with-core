inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 6 }));
  set_short( "Hallway - x35y42z6" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z6.c",
  "north" : DIR+"/rooms/x35y43z6.c",
  "south" : DIR+"/rooms/x35y41z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
