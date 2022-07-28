inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 24, 9 }));
  set_short( "Hallway - x3y24z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y25z9.c",
  "south" : DIR+"/rooms/x3y23z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
