inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 4 }));
  set_short( "Corridor - x15y26z4" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y27z4.c",
  "south" : DIR+"/rooms/x15y25z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
