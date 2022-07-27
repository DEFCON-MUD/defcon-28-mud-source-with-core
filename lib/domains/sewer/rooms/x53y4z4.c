inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 4 }));
  set_short( "Corridor - x53y4z4" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y4z4.c",
  "north" : DIR+"/rooms/x53y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
