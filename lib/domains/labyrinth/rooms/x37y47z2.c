inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 47, 2 }));
  set_short( "Corridor - x37y47z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y48z2.c",
  "south" : DIR+"/rooms/x37y46z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
