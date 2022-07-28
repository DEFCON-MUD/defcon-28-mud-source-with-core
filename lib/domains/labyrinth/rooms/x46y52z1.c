inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 1 }));
  set_short( "Corridor - x46y52z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z1.c",
  "east" : DIR+"/rooms/x47y52z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
