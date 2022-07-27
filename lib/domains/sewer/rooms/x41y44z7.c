inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 7 }));
  set_short( "Hallway - x41y44z7" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y44z7.c",
  "north" : DIR+"/rooms/x41y45z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
