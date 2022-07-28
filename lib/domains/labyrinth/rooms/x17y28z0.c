inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 0 }));
  set_short( "Hallway - x17y28z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y29z0.c",
  "south" : DIR+"/rooms/x17y27z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
