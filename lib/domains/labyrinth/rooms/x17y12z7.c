inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 12, 7 }));
  set_short( "Corridor - x17y12z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y13z7.c",
  "south" : DIR+"/rooms/x17y11z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
