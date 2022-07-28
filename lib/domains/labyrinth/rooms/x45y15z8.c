inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 15, 8 }));
  set_short( "Corridor - x45y15z8" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y16z8.c",
  "south" : DIR+"/rooms/x45y14z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
