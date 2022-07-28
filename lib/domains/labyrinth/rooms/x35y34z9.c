inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 9 }));
  set_short( "Corridor - x35y34z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y34z9.c",
  "south" : DIR+"/rooms/x35y33z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
