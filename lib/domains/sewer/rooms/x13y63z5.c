inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 63, 5 }));
  set_short( "Corridor - x13y63z5" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y64z5.c",
  "south" : DIR+"/rooms/x13y62z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
