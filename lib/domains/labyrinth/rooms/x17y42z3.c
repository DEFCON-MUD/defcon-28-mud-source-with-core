inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 3 }));
  set_short( "Passage - x17y42z3" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y43z3.c",
  "south" : DIR+"/rooms/x17y41z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
