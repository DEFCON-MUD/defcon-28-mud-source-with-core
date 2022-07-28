inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 16, 4 }));
  set_short( "Hallway - x38y16z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y16z4.c",
  "east" : DIR+"/rooms/x39y16z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
