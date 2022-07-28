inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 8 }));
  set_short( "Corridor - x13y22z8" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z8.c",
  "north" : DIR+"/rooms/x13y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
