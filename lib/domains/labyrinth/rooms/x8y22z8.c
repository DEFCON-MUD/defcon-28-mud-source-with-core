inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 8 }));
  set_short( "Hallway - x8y22z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z8.c",
  "east" : DIR+"/rooms/x9y22z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
