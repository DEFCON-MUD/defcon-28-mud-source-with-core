inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 5 }));
  set_short( "Passage - x41y46z5" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y46z5.c",
  "north" : DIR+"/rooms/x41y47z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
