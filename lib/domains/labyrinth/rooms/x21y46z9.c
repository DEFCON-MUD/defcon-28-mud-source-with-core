inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 9 }));
  set_short( "Hallway - x21y46z9" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y46z9.c",
  "north" : DIR+"/rooms/x21y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
