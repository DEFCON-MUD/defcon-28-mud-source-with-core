inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 6 }));
  set_short( "Passage - x13y8z6" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y8z6.c",
  "east" : DIR+"/rooms/x14y8z6.c",
  "south" : DIR+"/rooms/x13y7z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
