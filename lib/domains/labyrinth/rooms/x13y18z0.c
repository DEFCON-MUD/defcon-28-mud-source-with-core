inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 0 }));
  set_short( "Hallway - x13y18z0" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y18z0.c",
  "south" : DIR+"/rooms/x13y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
