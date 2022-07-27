inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 62, 2 }));
  set_short( "Corridor - x18y62z2" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y62z2.c",
  "east" : DIR+"/rooms/x19y62z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
