inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 5 }));
  set_short( "Hallway - x37y34z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y34z5.c",
  "east" : DIR+"/rooms/x38y34z5.c",
  "north" : DIR+"/rooms/x37y35z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
