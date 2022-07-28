inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 24, 2 }));
  set_short( "Hallway - x50y24z2" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y24z2.c",
  "east" : DIR+"/rooms/x51y24z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
