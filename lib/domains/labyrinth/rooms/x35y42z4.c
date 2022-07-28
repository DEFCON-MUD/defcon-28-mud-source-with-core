inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 4 }));
  set_short( "Hallway - x35y42z4" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y42z4.c",
  "east" : DIR+"/rooms/x36y42z4.c",
  "south" : DIR+"/rooms/x35y41z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
