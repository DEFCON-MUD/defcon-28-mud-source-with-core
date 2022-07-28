inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 4, 2 }));
  set_short( "Corridor - x14y4z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y4z2.c",
  "east" : DIR+"/rooms/x15y4z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
