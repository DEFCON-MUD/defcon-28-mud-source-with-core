inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 45, 2 }));
  set_short( "Hallway - x53y45z2" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y46z2.c",
  "south" : DIR+"/rooms/x53y44z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
