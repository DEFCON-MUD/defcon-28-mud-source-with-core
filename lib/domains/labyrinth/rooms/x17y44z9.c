inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 9 }));
  set_short( "Passage - x17y44z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z9.c",
  "east" : DIR+"/rooms/x18y44z9.c",
  "north" : DIR+"/rooms/x17y45z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
