inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 0 }));
  set_short( "Hallway - x15y26z0" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y26z0.c",
  "north" : DIR+"/rooms/x15y27z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
