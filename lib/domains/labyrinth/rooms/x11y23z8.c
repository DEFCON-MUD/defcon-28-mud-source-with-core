inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 8 }));
  set_short( "Hallway - x11y23z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z8.c",
  "south" : DIR+"/rooms/x11y22z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
