inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 6 }));
  set_short( "Corridor - x13y62z6" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y62z6.c",
  "south" : DIR+"/rooms/x13y61z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
