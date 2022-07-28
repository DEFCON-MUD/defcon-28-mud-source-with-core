inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 28, 5 }));
  set_short( "Corridor - x38y28z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y28z5.c",
  "east" : DIR+"/rooms/x39y28z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
