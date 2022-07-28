inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 33, 0 }));
  set_short( "Corridor - x17y33z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y34z0.c",
  "south" : DIR+"/rooms/x17y32z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
