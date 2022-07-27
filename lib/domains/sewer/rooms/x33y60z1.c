inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 1 }));
  set_short( "Corridor - x33y60z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y60z1.c",
  "north" : DIR+"/rooms/x33y61z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
