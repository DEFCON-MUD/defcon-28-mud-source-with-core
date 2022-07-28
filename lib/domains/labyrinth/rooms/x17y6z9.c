inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 9 }));
  set_short( "Corridor - x17y6z9" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y6z9.c",
  "east" : DIR+"/rooms/x18y6z9.c",
  "north" : DIR+"/rooms/x17y7z9.c",
  "south" : DIR+"/rooms/x17y5z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
