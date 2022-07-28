inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 5 }));
  set_short( "Corridor - x9y62z5" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y62z5.c",
  "east" : DIR+"/rooms/x10y62z5.c",
  "south" : DIR+"/rooms/x9y61z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
