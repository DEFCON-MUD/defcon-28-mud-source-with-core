inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 6 }));
  set_short( "Hallway - x31y27z6" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z6.c",
  "south" : DIR+"/rooms/x31y26z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
