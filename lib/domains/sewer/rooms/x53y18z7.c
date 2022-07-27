inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 7 }));
  set_short( "Passage - x53y18z7" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y19z7.c",
  "south" : DIR+"/rooms/x53y17z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
