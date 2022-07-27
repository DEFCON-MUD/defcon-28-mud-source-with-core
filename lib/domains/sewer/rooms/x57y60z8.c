inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 8 }));
  set_short( "Passage - x57y60z8" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y60z8.c",
  "north" : DIR+"/rooms/x57y61z8.c",
  "south" : DIR+"/rooms/x57y59z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
