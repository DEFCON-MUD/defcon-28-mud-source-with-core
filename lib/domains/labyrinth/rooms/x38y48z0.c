inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 48, 0 }));
  set_short( "Corridor - x38y48z0" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y48z0.c",
  "east" : DIR+"/rooms/x39y48z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
