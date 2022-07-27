inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 7 }));
  set_short( "Corridor - x15y11z7" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z7.c",
  "south" : DIR+"/rooms/x15y10z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
