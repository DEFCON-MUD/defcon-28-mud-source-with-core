inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 5 }));
  set_short( "Hallway - x53y44z5" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y45z5.c",
  "south" : DIR+"/rooms/x53y43z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
