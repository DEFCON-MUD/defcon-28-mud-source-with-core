inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 42, 6 }));
  set_short( "Hallway - x37y42z6" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y42z6.c",
  "south" : DIR+"/rooms/x37y41z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
