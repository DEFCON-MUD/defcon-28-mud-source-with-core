inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 47, 3 }));
  set_short( "Corridor - x37y47z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y48z3.c",
  "south" : DIR+"/rooms/x37y46z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
